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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Sampler_Value(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Sampler_Value(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

