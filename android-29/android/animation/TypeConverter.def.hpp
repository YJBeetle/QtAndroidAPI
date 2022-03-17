#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;

namespace android::animation
{
	class TypeConverter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypeConverter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TypeConverter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TypeConverter(JClass arg0, JClass arg1);
		
		// Methods
		JObject convert(JObject arg0) const;
	};
} // namespace android::animation

