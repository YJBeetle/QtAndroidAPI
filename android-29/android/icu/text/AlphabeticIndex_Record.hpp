#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class AlphabeticIndex_Record : public __JniBaseClass
	{
	public:
		// Fields
		
		AlphabeticIndex_Record(QAndroidJniObject obj);
		// Constructors
		AlphabeticIndex_Record() = default;
		
		// Methods
		jobject getData();
		jstring getName();
		jstring toString();
	};
} // namespace android::icu::text

