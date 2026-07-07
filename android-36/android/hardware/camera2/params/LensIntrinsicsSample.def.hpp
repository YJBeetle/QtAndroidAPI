#pragma once

#include "../../../../JObject.hpp"

class JFloatArray;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class LensIntrinsicsSample : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LensIntrinsicsSample(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LensIntrinsicsSample(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LensIntrinsicsSample(jlong arg0, JFloatArray arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JFloatArray getLensIntrinsics() const;
		jlong getTimestampNanos() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

