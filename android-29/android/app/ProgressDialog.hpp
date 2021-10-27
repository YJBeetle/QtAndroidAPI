#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dialog.hpp"
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
		
		ProgressDialog(QAndroidJniObject obj);
		// Constructors
		ProgressDialog(android::content::Context &arg0);
		ProgressDialog(android::content::Context &arg0, jint &arg1);
		ProgressDialog() = default;
		
		// Methods
		static QAndroidJniObject show(android::content::Context arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject show(android::content::Context arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject show(android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3);
		static QAndroidJniObject show(android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3);
		static QAndroidJniObject show(android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4);
		static QAndroidJniObject show(android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4);
		static QAndroidJniObject show(android::content::Context arg0, jstring arg1, jstring arg2, jboolean arg3, jboolean arg4, __JniBaseClass arg5);
		static QAndroidJniObject show(android::content::Context arg0, const QString &arg1, const QString &arg2, jboolean arg3, jboolean arg4, __JniBaseClass arg5);
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
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setProgress(jint arg0);
		void setProgressDrawable(android::graphics::drawable::Drawable arg0);
		void setProgressNumberFormat(jstring arg0);
		void setProgressNumberFormat(const QString &arg0);
		void setProgressPercentFormat(java::text::NumberFormat arg0);
		void setProgressStyle(jint arg0);
		void setSecondaryProgress(jint arg0);
	};
} // namespace android::app

