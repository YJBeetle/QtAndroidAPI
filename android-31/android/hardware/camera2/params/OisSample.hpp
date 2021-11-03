#pragma once

#include "../../../../JObject.hpp"


namespace android::hardware::camera2::params
{
	class OisSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OisSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OisSample(QJniObject obj);
		
		// Constructors
		OisSample(jlong arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getTimestamp();
		jfloat getXshift();
		jfloat getYshift();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

