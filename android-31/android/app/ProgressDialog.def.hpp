#pragma once

#include "./AlertDialog.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProgressDialog(const char *className, const char *sig, Ts...agv) : android::app::AlertDialog(className, sig, std::forward<Ts>(agv)...) {}
		ProgressDialog(QAndroidJniObject obj) : android::app::AlertDialog(obj) {}
		
		// Constructors
		ProgressDialog(android::content::Context arg0);
		ProgressDialog(android::content::Context arg0, jint arg1);
		
		// Methods
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4);
		static android::app::ProgressDialog show(android::content::Context arg0, JString arg1, JString arg2, jboolean arg3, jboolean arg4, JObject arg5);
		jint getMax() const;
		jint getProgress() const;
		jint getSecondaryProgress() const;
		void incrementProgressBy(jint arg0) const;
		void incrementSecondaryProgressBy(jint arg0) const;
		jboolean isIndeterminate() const;
		void onStart() const;
		void setIndeterminate(jboolean arg0) const;
		void setIndeterminateDrawable(android::graphics::drawable::Drawable arg0) const;
		void setMax(jint arg0) const;
		void setMessage(JString arg0) const;
		void setProgress(jint arg0) const;
		void setProgressDrawable(android::graphics::drawable::Drawable arg0) const;
		void setProgressNumberFormat(JString arg0) const;
		void setProgressPercentFormat(java::text::NumberFormat arg0) const;
		void setProgressStyle(jint arg0) const;
		void setSecondaryProgress(jint arg0) const;
	};
} // namespace android::app

