#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::number
{
	class IntegerWidth : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntegerWidth(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IntegerWidth(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::IntegerWidth zeroFillTo(jint arg0);
		android::icu::number::IntegerWidth truncateAt(jint arg0);
	};
} // namespace android::icu::number

