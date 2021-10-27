#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class ConfirmationPrompt;
}

namespace android::security
{
	class ConfirmationPrompt_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ConfirmationPrompt_Builder(QAndroidJniObject obj);
		// Constructors
		ConfirmationPrompt_Builder(android::content::Context &arg0);
		ConfirmationPrompt_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtraData(jbyteArray arg0);
		QAndroidJniObject setPromptText(jstring arg0);
		QAndroidJniObject setPromptText(const QString &arg0);
	};
} // namespace android::security

