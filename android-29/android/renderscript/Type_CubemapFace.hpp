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
		
		Type_CubemapFace(QAndroidJniObject obj);
		// Constructors
		Type_CubemapFace() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::renderscript

