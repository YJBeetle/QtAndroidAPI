#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class WebSettings_LayoutAlgorithm : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_LayoutAlgorithm NARROW_COLUMNS();
		static android::webkit::WebSettings_LayoutAlgorithm NORMAL();
		static android::webkit::WebSettings_LayoutAlgorithm SINGLE_COLUMN();
		static android::webkit::WebSettings_LayoutAlgorithm TEXT_AUTOSIZING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_LayoutAlgorithm(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_LayoutAlgorithm(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_LayoutAlgorithm valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::webkit

