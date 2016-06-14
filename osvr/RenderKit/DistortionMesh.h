/** @file
    @brief Header

    @date 2016

    @author
    Sensics, Inc.
    <http://sensics.com>

*/

// Copyright 2016 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 	http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef INCLUDED_DistortionMesh_h_GUID_6903F115_8467_4DBD_9AFC_6A36C580A266
#define INCLUDED_DistortionMesh_h_GUID_6903F115_8467_4DBD_9AFC_6A36C580A266

// Internal Includes
#include "DistortionMeshVertex.h"

// Library/third-party includes
// - none

// Standard includes
#include <vector>
#include <cstdint>

namespace osvr {
namespace renderkit {

    class DistortionMesh {
    public:
        std::vector<DistortionMeshVertex> vertices;
        std::vector<uint16_t> indices;
    };

} // namespace renderkit
} // namespace osvr

#endif // INCLUDED_DistortionMesh_h_GUID_6903F115_8467_4DBD_9AFC_6A36C580A266

