#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Shader_TileMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLAMP();
		static QAndroidJniObject MIRROR();
		static QAndroidJniObject REPEAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Shader_TileMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Shader_TileMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

