/*
 * Copyright 2021 Jamie Mansfield <jmansfield@cadixdev.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <launch/LaunchStep.h>

class VerifyJavaInstall : public LaunchStep {
    Q_OBJECT

public:
    explicit VerifyJavaInstall(LaunchTask *parent) : LaunchStep(parent) {
    };
    ~VerifyJavaInstall() override = default;

    void executeTask() override;
    bool canAbort() const override {
        return false;
    }
};