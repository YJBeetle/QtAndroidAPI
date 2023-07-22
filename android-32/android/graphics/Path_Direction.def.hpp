#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class Path_Direction : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Path_Direction CCW();
		static android::graphics::Path_Direction CW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Path_Direction(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Path_Direction(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::Path_Direction valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

