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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Canvas_VertexMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Canvas_VertexMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

