/*
 * Copyright 2018 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CARTOGRAPHER_GRPC_INTERNAL_HANDLERS_GET_SUBMAP_HANDLER_H
#define CARTOGRAPHER_GRPC_INTERNAL_HANDLERS_GET_SUBMAP_HANDLER_H

#include "cartographer_grpc/internal/framework/rpc_handler.h"
#include "cartographer_grpc/proto/map_builder_service.pb.h"
#include "google/protobuf/empty.pb.h"

namespace cartographer {
namespace cloud {
namespace handlers {

class GetSubmapHandler
    : public framework::RpcHandler<proto::GetSubmapRequest,
                                   proto::GetSubmapResponse> {
 public:
  std::string method_name() const override {
    return "/cartographer.cloud.proto.MapBuilderService/GetSubmap";
  }
  void OnRequest(const proto::GetSubmapRequest &request) override;
};

}  // namespace handlers
}  // namespace cloud
}  // namespace cartographer

#endif  // CARTOGRAPHER_GRPC_INTERNAL_HANDLERS_GET_SUBMAP_HANDLER_H
