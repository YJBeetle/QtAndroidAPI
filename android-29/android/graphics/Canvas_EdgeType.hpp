#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Canvas_EdgeType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AA();
		static QAndroidJniObject BW();
		
		Canvas_EdgeType(QAndroidJniObject obj);
		// Constructors
		Canvas_EdgeType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

