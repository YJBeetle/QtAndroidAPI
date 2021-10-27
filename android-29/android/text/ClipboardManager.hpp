#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class ClipboardManager : public __JniBaseClass
	{
	public:
		// Fields
		
		ClipboardManager(QAndroidJniObject obj);
		// Constructors
		ClipboardManager();
		
		// Methods
		jstring getText();
		jboolean hasText();
		void setText(jstring arg0);
		void setText(const QString &arg0);
	};
} // namespace android::text

