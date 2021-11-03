#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class ClipboardManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QAndroidJniObject obj);
		
		// Constructors
		ClipboardManager();
		
		// Methods
		jstring getText();
		jboolean hasText();
		void setText(jstring arg0);
	};
} // namespace android::text

