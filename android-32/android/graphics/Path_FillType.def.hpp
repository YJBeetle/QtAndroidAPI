#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

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
		Path_FillType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Path_FillType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

