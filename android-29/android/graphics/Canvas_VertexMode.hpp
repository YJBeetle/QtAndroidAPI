#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Canvas_VertexMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject TRIANGLES();
		static QAndroidJniObject TRIANGLE_FAN();
		static QAndroidJniObject TRIANGLE_STRIP();
		
		Canvas_VertexMode(QAndroidJniObject obj);
		// Constructors
		Canvas_VertexMode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

