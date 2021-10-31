#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_FillType : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Path_FillType EVEN_ODD();
		static android::graphics::Path_FillType INVERSE_EVEN_ODD();
		static android::graphics::Path_FillType INVERSE_WINDING();
		static android::graphics::Path_FillType WINDING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Path_FillType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Path_FillType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Path_FillType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

