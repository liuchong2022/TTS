﻿//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

namespace BatchClient
{
    public class WebHookProperties
    {
        public string ApiVersion { get; set; }

        public EntityError Error { get; set; }

        public string Secret { get; set; }
    }
}
