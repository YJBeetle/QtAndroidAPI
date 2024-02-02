#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class WebSettings_TextSize : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_TextSize LARGER();
		static android::webkit::WebSettings_TextSize LARGEST();
		static android::webkit::WebSettings_TextSize NORMAL();
		static android::webkit::WebSettings_TextSize SMALLER();
		static android::webkit::WebSettings_TextSize SMALLEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSettings_TextSize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_TextSize(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_TextSize valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::webkit

