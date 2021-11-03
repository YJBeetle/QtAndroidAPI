#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::graphics
{
	class PathDashPathEffect_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::PathDashPathEffect_Style MORPH();
		static android::graphics::PathDashPathEffect_Style ROTATE();
		static android::graphics::PathDashPathEffect_Style TRANSLATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PathDashPathEffect_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PathDashPathEffect_Style(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::PathDashPathEffect_Style valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::graphics

