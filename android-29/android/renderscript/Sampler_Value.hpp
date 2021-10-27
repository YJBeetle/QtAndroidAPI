#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Sampler_Value : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLAMP();
		static QAndroidJniObject LINEAR();
		static QAndroidJniObject LINEAR_MIP_LINEAR();
		static QAndroidJniObject LINEAR_MIP_NEAREST();
		static QAndroidJniObject MIRRORED_REPEAT();
		static QAndroidJniObject NEAREST();
		static QAndroidJniObject WRAP();
		
		Sampler_Value(QAndroidJniObject obj);
		// Constructors
		Sampler_Value() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::renderscript

