#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_FillType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EVEN_ODD();
		static QAndroidJniObject INVERSE_EVEN_ODD();
		static QAndroidJniObject INVERSE_WINDING();
		static QAndroidJniObject WINDING();
		
		Path_FillType(QAndroidJniObject obj);
		// Constructors
		Path_FillType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

