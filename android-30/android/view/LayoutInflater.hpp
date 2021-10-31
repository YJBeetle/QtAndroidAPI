#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::view
{
	class LayoutInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutInflater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LayoutInflater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::LayoutInflater from(android::content::Context arg0);
		android::view::LayoutInflater cloneInContext(android::content::Context arg0);
		android::view::View createView(jstring arg0, jstring arg1, __JniBaseClass arg2);
		android::view::View createView(android::content::Context arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		android::content::Context getContext();
		__JniBaseClass getFactory();
		__JniBaseClass getFactory2();
		__JniBaseClass getFilter();
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1);
		android::view::View inflate(__JniBaseClass arg0, android::view::ViewGroup arg1);
		android::view::View inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2);
		android::view::View inflate(__JniBaseClass arg0, android::view::ViewGroup arg1, jboolean arg2);
		android::view::View onCreateView(android::content::Context arg0, android::view::View arg1, jstring arg2, __JniBaseClass arg3);
		void setFactory(__JniBaseClass arg0);
		void setFactory2(__JniBaseClass arg0);
		void setFilter(__JniBaseClass arg0);
	};
} // namespace android::view

