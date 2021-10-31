#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Paint_Style FILL();
		static android::graphics::Paint_Style FILL_AND_STROKE();
		static android::graphics::Paint_Style STROKE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Style(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Paint_Style valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

