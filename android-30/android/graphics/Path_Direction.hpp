#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_Direction : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Path_Direction CCW();
		static android::graphics::Path_Direction CW();
		
		// QJniObject forward
		template<typename ...Ts> explicit Path_Direction(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Path_Direction(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Path_Direction valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

