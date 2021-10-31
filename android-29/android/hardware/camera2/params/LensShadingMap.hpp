#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::hardware::camera2::params
{
	class RggbChannelVector;
}

namespace android::hardware::camera2::params
{
	class LensShadingMap : public __JniBaseClass
	{
	public:
		// Fields
		static jfloat MINIMUM_GAIN_FACTOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LensShadingMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LensShadingMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void copyGainFactors(jfloatArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint getColumnCount();
		jfloat getGainFactor(jint arg0, jint arg1, jint arg2);
		jint getGainFactorCount();
		QAndroidJniObject getGainFactorVector(jint arg0, jint arg1);
		jint getRowCount();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

