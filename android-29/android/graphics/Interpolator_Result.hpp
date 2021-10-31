#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Interpolator_Result : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FREEZE_END();
		static QAndroidJniObject FREEZE_START();
		static QAndroidJniObject NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Interpolator_Result(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Interpolator_Result(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

