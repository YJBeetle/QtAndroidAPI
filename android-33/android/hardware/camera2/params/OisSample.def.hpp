#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class OisSample : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OisSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OisSample(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		OisSample(jlong arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getTimestamp() const;
		jfloat getXshift() const;
		jfloat getYshift() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

