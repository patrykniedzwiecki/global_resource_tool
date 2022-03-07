/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#ifndef OHOS_RESTOOL_PREVIEW_MANAGER_H
#define OHOS_RESTOOL_PREVIEW_MANAGER_H

#include<vector>
#include<string>
#include "restool_errors.h"

namespace OHOS {
namespace Global {
namespace Restool {
class PreviewManager {
public:
    PreviewManager() {};
    virtual ~PreviewManager();
    uint32_t ScanModules(const std::vector<std::string> &modulePaths, const std::string &output);
    void SetPriority(int32_t priority) { priority_ = priority; };
private:
    bool ScanFile(const std::string &filePath, int32_t priority);
    int32_t priority_ = -1;
};
}
}
}
#endif