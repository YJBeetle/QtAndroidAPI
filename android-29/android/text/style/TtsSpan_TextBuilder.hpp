#pragma once

#include "../../../__JniBaseClass.hpp"
#include "TtsSpan_Builder.hpp"
#include "TtsSpan_SemioticClassBuilder.hpp"


namespace __jni_impl::android::text::style
{
	class TtsSpan_TextBuilder : public __jni_impl::android::text::style::TtsSpan_SemioticClassBuilder
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setText(const QString &arg0);
	};
} // namespace __jni_impl::android::text::style


namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void TtsSpan_TextBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TextBuilder",
			"()V"
		);
	}
	void TtsSpan_TextBuilder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TtsSpan_TextBuilder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.TtsSpan$TextBuilder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TtsSpan_TextBuilder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			arg0
		);
	}
	QAndroidJniObject TtsSpan_TextBuilder::setText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/text/style/TtsSpan$TextBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class TtsSpan_TextBuilder : public __jni_impl::android::text::style::TtsSpan_TextBuilder
	{
	public:
		TtsSpan_TextBuilder(QAndroidJniObject obj) { __thiz = obj; }
		TtsSpan_TextBuilder()
		{
			__constructor();
		}
		TtsSpan_TextBuilder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::style

