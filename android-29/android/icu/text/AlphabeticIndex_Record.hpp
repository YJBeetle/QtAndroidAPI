#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class AlphabeticIndex_Record : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_Record(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_Record(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject getData();
		jstring getName();
		jstring toString();
	};
} // namespace android::icu::text

