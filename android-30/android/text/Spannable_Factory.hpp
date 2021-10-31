#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Spannable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Spannable_Factory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Spannable_Factory(QAndroidJniObject obj);
		
		// Constructors
		Spannable_Factory();
		
		// Methods
		static android::text::Spannable_Factory getInstance();
		__JniBaseClass newSpannable(jstring arg0);
	};
} // namespace android::text

