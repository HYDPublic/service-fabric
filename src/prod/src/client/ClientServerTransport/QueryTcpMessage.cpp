// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#include "stdafx.h"

using namespace std;
using namespace Common;
using namespace Transport;
using namespace Query;
using namespace ServiceModel;
using namespace ClientServerTransport;

GlobalWString QueryTcpMessage::QueryAction = make_global<wstring>(L"QueryRequest");

const Actor::Enum QueryTcpMessage::actor_ = Actor::NamingGateway;
