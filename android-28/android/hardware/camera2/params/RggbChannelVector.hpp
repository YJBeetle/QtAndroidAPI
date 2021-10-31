#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class RggbChannelVector : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLUE();
		static jint COUNT();
		static jint GREEN_EVEN();
		static jint GREEN_ODD();
		static jint RED();
		
		// QJniObject forward
		template<typename ...Ts> explicit RggbChannelVector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RggbChannelVector(QJniObject obj);
		
		// Constructors
		RggbChannelVector(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		void copyTo(jfloatArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jfloat getBlue();
		jfloat getComponent(jint arg0);
		jfloat getGreenEven();
		jfloat getGreenOdd();
		jfloat getRed();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

