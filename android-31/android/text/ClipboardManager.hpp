#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class ClipboardManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QJniObject obj);
		
		// Constructors
		ClipboardManager();
		
		// Methods
		jstring getText();
		jboolean hasText();
		void setText(jstring arg0);
	};
} // namespace android::text

