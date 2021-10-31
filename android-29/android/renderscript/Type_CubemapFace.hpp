#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class Type_CubemapFace : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NEGATIVE_X();
		static QAndroidJniObject NEGATIVE_Y();
		static QAndroidJniObject NEGATIVE_Z();
		static QAndroidJniObject POSITIVE_X();
		static QAndroidJniObject POSITIVE_Y();
		static QAndroidJniObject POSITIVE_Z();
		static QAndroidJniObject POSITVE_X();
		static QAndroidJniObject POSITVE_Y();
		static QAndroidJniObject POSITVE_Z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Type_CubemapFace(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Type_CubemapFace(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

