#pragma once

#ifndef ANDROID_WIDGET_CALENDARVIEW
#define ANDROID_WIDGET_CALENDARVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::widget
{
	class CalendarView : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		jlong getDate();
		jint getDateTextAppearance();
		jint getFirstDayOfWeek();
		jint getFocusedMonthDateColor();
		jlong getMaxDate();
		jlong getMinDate();
		QAndroidJniObject getSelectedDateVerticalBar();
		jint getSelectedWeekBackgroundColor();
		jboolean getShowWeekNumber();
		jint getShownWeekCount();
		jint getUnfocusedMonthDateColor();
		jint getWeekDayTextAppearance();
		jint getWeekNumberColor();
		jint getWeekSeparatorLineColor();
		void setDate(jlong arg0);
		void setDate(jlong arg0, jboolean arg1, jboolean arg2);
		void setDateTextAppearance(jint arg0);
		void setFirstDayOfWeek(jint arg0);
		void setFocusedMonthDateColor(jint arg0);
		void setMaxDate(jlong arg0);
		void setMinDate(jlong arg0);
		void setOnDateChangeListener(__jni_impl::__JniBaseClass arg0);
		void setSelectedDateVerticalBar(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setSelectedDateVerticalBar(jint arg0);
		void setSelectedWeekBackgroundColor(jint arg0);
		void setShowWeekNumber(jboolean arg0);
		void setShownWeekCount(jint arg0);
		void setUnfocusedMonthDateColor(jint arg0);
		void setWeekDayTextAppearance(jint arg0);
		void setWeekNumberColor(jint arg0);
		void setWeekSeparatorLineColor(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring CalendarView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong CalendarView::getDate()
	{
		return __thiz.callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jint CalendarView::getDateTextAppearance()
	{
		return __thiz.callMethod<jint>(
			"getDateTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getFirstDayOfWeek()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint CalendarView::getFocusedMonthDateColor()
	{
		return __thiz.callMethod<jint>(
			"getFocusedMonthDateColor",
			"()I"
		);
	}
	jlong CalendarView::getMaxDate()
	{
		return __thiz.callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	jlong CalendarView::getMinDate()
	{
		return __thiz.callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	QAndroidJniObject CalendarView::getSelectedDateVerticalBar()
	{
		return __thiz.callObjectMethod(
			"getSelectedDateVerticalBar",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint CalendarView::getSelectedWeekBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getSelectedWeekBackgroundColor",
			"()I"
		);
	}
	jboolean CalendarView::getShowWeekNumber()
	{
		return __thiz.callMethod<jboolean>(
			"getShowWeekNumber",
			"()Z"
		);
	}
	jint CalendarView::getShownWeekCount()
	{
		return __thiz.callMethod<jint>(
			"getShownWeekCount",
			"()I"
		);
	}
	jint CalendarView::getUnfocusedMonthDateColor()
	{
		return __thiz.callMethod<jint>(
			"getUnfocusedMonthDateColor",
			"()I"
		);
	}
	jint CalendarView::getWeekDayTextAppearance()
	{
		return __thiz.callMethod<jint>(
			"getWeekDayTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getWeekNumberColor()
	{
		return __thiz.callMethod<jint>(
			"getWeekNumberColor",
			"()I"
		);
	}
	jint CalendarView::getWeekSeparatorLineColor()
	{
		return __thiz.callMethod<jint>(
			"getWeekSeparatorLineColor",
			"()I"
		);
	}
	void CalendarView::setDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setDate(jlong arg0, jboolean arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"setDate",
			"(JZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CalendarView::setDateTextAppearance(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDateTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFirstDayOfWeek(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFocusedMonthDateColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setMaxDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setMinDate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setOnDateChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDateChangeListener",
			"(Landroid/widget/CalendarView$OnDateChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedDateVerticalBar",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedDateVerticalBar",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setSelectedWeekBackgroundColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedWeekBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setShowWeekNumber(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowWeekNumber",
			"(Z)V",
			arg0
		);
	}
	void CalendarView::setShownWeekCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setShownWeekCount",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setUnfocusedMonthDateColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setUnfocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekDayTextAppearance(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWeekDayTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekNumberColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWeekNumberColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekSeparatorLineColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWeekSeparatorLineColor",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CalendarView : public __jni_impl::android::widget::CalendarView
	{
	public:
		CalendarView(QAndroidJniObject obj) { __thiz = obj; }
		CalendarView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CALENDARVIEW

