#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::animation
{
	class TypeConverter : public __JniBaseClass
	{
	public:
		// Fields
		
		TypeConverter(QAndroidJniObject obj);
		// Constructors
		TypeConverter(jclass &arg0, jclass &arg1);
		TypeConverter() = default;
		
		// Methods
		jobject convert(jobject arg0);
	};
} // namespace android::animation

