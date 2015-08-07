/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /*
  */
  class AWS_LAMBDA_API PublishVersionRequest : public LambdaRequest
  {
  public:
    PublishVersionRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The Lambda function name. You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The Lambda function name. You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /*
     <p>The Lambda function name. You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /*
     <p>The Lambda function name. You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline PublishVersionRequest&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The Lambda function name. You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline PublishVersionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>The SHA256 hash of the deployment package you want to publish. This provides validation on the code you are publishing. If you provide this parameter value must match the SHA256 of the HEAD version for the publication to succeed. </p>
    */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }
    /*
     <p>The SHA256 hash of the deployment package you want to publish. This provides validation on the code you are publishing. If you provide this parameter value must match the SHA256 of the HEAD version for the publication to succeed. </p>
    */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /*
     <p>The SHA256 hash of the deployment package you want to publish. This provides validation on the code you are publishing. If you provide this parameter value must match the SHA256 of the HEAD version for the publication to succeed. </p>
    */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /*
     <p>The SHA256 hash of the deployment package you want to publish. This provides validation on the code you are publishing. If you provide this parameter value must match the SHA256 of the HEAD version for the publication to succeed. </p>
    */
    inline PublishVersionRequest&  WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /*
     <p>The SHA256 hash of the deployment package you want to publish. This provides validation on the code you are publishing. If you provide this parameter value must match the SHA256 of the HEAD version for the publication to succeed. </p>
    */
    inline PublishVersionRequest& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}

    /*
     <p> The description for the version you are publishing. If not provided, AWS Lambda copies the description from the HEAD version. </p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p> The description for the version you are publishing. If not provided, AWS Lambda copies the description from the HEAD version. </p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p> The description for the version you are publishing. If not provided, AWS Lambda copies the description from the HEAD version. </p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p> The description for the version you are publishing. If not provided, AWS Lambda copies the description from the HEAD version. </p>
    */
    inline PublishVersionRequest&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p> The description for the version you are publishing. If not provided, AWS Lambda copies the description from the HEAD version. </p>
    */
    inline PublishVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>If this boolean parameter is set to true, the published version then becomes the default version.</p>
    */
    inline bool GetMakeDefault() const{ return m_makeDefault; }
    /*
     <p>If this boolean parameter is set to true, the published version then becomes the default version.</p>
    */
    inline void SetMakeDefault(bool value) { m_makeDefaultHasBeenSet = true; m_makeDefault = value; }

    /*
     <p>If this boolean parameter is set to true, the published version then becomes the default version.</p>
    */
    inline PublishVersionRequest&  WithMakeDefault(bool value) { SetMakeDefault(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    bool m_makeDefault;
    bool m_makeDefaultHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws