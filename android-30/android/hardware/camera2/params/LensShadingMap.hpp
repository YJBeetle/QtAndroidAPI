#pragma once

#include "../../../../JObject.hpp"

class JFloatArray;
namespace android::hardware::camera2::params
{
	class RggbChannelVector;
}
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class LensShadingMap : public JObject
	{
	public:
		// Fields
		static jfloat MINIMUM_GAIN_FACTOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LensShadingMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LensShadingMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void copyGainFactors(JFloatArray arg0, jint arg1);
		jboolean equals(JObject arg0);
		jint getColumnCount();
		jfloat getGainFactor(jint arg0, jint arg1, jint arg2);
		jint getGainFactorCount();
		android::hardware::camera2::params::RggbChannelVector getGainFactorVector(jint arg0, jint arg1);
		jint getRowCount();
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2::params

