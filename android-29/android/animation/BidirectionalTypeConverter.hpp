#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TypeConverter.hpp"


namespace android::animation
{
	class BidirectionalTypeConverter : public android::animation::TypeConverter
	{
	public:
		// Fields
		
		BidirectionalTypeConverter(QAndroidJniObject obj);
		// Constructors
		BidirectionalTypeConverter(jclass arg0, jclass arg1);
		BidirectionalTypeConverter() = default;
		
		// Methods
		jobject convertBack(jobject arg0);
		QAndroidJniObject invert();
	};
} // namespace android::animation

