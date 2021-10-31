#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class Output : public __JniBaseClass
	{
	public:
		// Fields
		jobject value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Output(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Output(QAndroidJniObject obj);
		
		// Constructors
		Output();
		Output(jobject arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::util

