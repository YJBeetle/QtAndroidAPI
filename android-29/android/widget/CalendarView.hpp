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
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::widget
{
	class CalendarView : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jlong getDate();
		jint getFirstDayOfWeek();
		void setFirstDayOfWeek(jint arg0);
		void setDate(jlong arg0);
		void setDate(jlong arg0, jboolean arg1, jboolean arg2);
		jstring getAccessibilityClassName();
		void setShownWeekCount(jint arg0);
		jint getShownWeekCount();
		void setSelectedWeekBackgroundColor(jint arg0);
		jint getSelectedWeekBackgroundColor();
		void setFocusedMonthDateColor(jint arg0);
		jint getFocusedMonthDateColor();
		void setUnfocusedMonthDateColor(jint arg0);
		jint getUnfocusedMonthDateColor();
		void setWeekNumberColor(jint arg0);
		jint getWeekNumberColor();
		void setWeekSeparatorLineColor(jint arg0);
		jint getWeekSeparatorLineColor();
		void setSelectedDateVerticalBar(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setSelectedDateVerticalBar(jint arg0);
		QAndroidJniObject getSelectedDateVerticalBar();
		void setWeekDayTextAppearance(jint arg0);
		jint getWeekDayTextAppearance();
		void setDateTextAppearance(jint arg0);
		jint getDateTextAppearance();
		void setShowWeekNumber(jboolean arg0);
		jboolean getShowWeekNumber();
		void setOnDateChangeListener(__jni_impl::__JniBaseClass arg0);
		jlong getMinDate();
		void setMinDate(jlong arg0);
		jlong getMaxDate();
		void setMaxDate(jlong arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../content/res/Configuration.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
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
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CalendarView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CalendarView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jlong CalendarView::getDate()
	{
		return __thiz.callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jint CalendarView::getFirstDayOfWeek()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
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
	jstring CalendarView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void CalendarView::setShownWeekCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setShownWeekCount",
			"(I)V",
			arg0
		);
	}
	jint CalendarView::getShownWeekCount()
	{
		return __thiz.callMethod<jint>(
			"getShownWeekCount",
			"()I"
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
	jint CalendarView::getSelectedWeekBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getSelectedWeekBackgroundColor",
			"()I"
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
	jint CalendarView::getFocusedMonthDateColor()
	{
		return __thiz.callMethod<jint>(
			"getFocusedMonthDateColor",
			"()I"
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
	jint CalendarView::getUnfocusedMonthDateColor()
	{
		return __thiz.callMethod<jint>(
			"getUnfocusedMonthDateColor",
			"()I"
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
	jint CalendarView::getWeekNumberColor()
	{
		return __thiz.callMethod<jint>(
			"getWeekNumberColor",
			"()I"
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
	jint CalendarView::getWeekSeparatorLineColor()
	{
		return __thiz.callMethod<jint>(
			"getWeekSeparatorLineColor",
			"()I"
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
	QAndroidJniObject CalendarView::getSelectedDateVerticalBar()
	{
		return __thiz.callObjectMethod(
			"getSelectedDateVerticalBar",
			"()Landroid/graphics/drawable/Drawable;"
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
	jint CalendarView::getWeekDayTextAppearance()
	{
		return __thiz.callMethod<jint>(
			"getWeekDayTextAppearance",
			"()I"
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
	jint CalendarView::getDateTextAppearance()
	{
		return __thiz.callMethod<jint>(
			"getDateTextAppearance",
			"()I"
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
	jboolean CalendarView::getShowWeekNumber()
	{
		return __thiz.callMethod<jboolean>(
			"getShowWeekNumber",
			"()Z"
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
	jlong CalendarView::getMinDate()
	{
		return __thiz.callMethod<jlong>(
			"getMinDate",
			"()J"
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
	jlong CalendarView::getMaxDate()
	{
		return __thiz.callMethod<jlong>(
			"getMaxDate",
			"()J"
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
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CalendarView : public __jni_impl::android::widget::CalendarView
	{
	public:
		CalendarView(QAndroidJniObject obj) { __thiz = obj; }
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CalendarView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CalendarView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CALENDARVIEW

