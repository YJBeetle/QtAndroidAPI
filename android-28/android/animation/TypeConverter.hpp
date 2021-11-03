#pragma once

#include "../../JObject.hpp"


namespace android::animation
{
	class TypeConverter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypeConverter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypeConverter(QAndroidJniObject obj);
		
		// Constructors
		TypeConverter(jclass arg0, jclass arg1);
		
		// Methods
		jobject convert(jobject arg0);
	};
} // namespace android::animation

