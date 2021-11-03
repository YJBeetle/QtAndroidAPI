#pragma once

#include "./AlertDialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;
namespace java::text
{
	class NumberFormat;
}

namespace android::app
{
	class ProgressDialog : public android::app::AlertDialog
	{
	public:
		// Fields
		static jint STYLE_HORIZONTAL();
		static jint STYLE_SPINNER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProgressDialog(const char *className, const char *sig, Ts...agv) : android::app::AlertDialog(className, sig, std::forward<Ts>(agv)...) {}
		ProgressDialog(QJniObject obj);
		
		// Constructors
		ProgressDialog(android::content::Context arg0);
		ProgressDialog(android::content::Context arg0, jint arg1);
		
		// Methods
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4, JObject arg5);
		jint getMax();
		jint getProgress();
		jint getSecondaryProgress();
		void incrementProgressBy(jint arg0);
		void incrementSecondaryProgressBy(jint arg0);
		jboolean isIndeterminate();
		void onStart();
		void setIndeterminate(jboolean arg0);
		void setIndeterminateDrawable(android::graphics::drawable::Drawable arg0);
		void setMax(jint arg0);
		void setMessage(JString arg0);
		void setProgress(jint arg0);
		void setProgressDrawable(android::graphics::drawable::Drawable arg0);
		void setProgressNumberFormat(JString arg0);
		void setProgressPercentFormat(java::text::NumberFormat arg0);
		void setProgressStyle(jint arg0);
		void setSecondaryProgress(jint arg0);
	};
} // namespace android::app

