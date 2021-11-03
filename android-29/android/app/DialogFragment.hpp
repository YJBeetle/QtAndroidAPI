#pragma once

#include "./Fragment.hpp"

class JArray;
namespace android::app
{
	class Dialog;
}
namespace android::app
{
	class FragmentManager;
}
namespace android::app
{
	class FragmentTransaction;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class LayoutInflater;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;

namespace android::app
{
	class DialogFragment : public android::app::Fragment
	{
	public:
		// Fields
		static jint STYLE_NORMAL();
		static jint STYLE_NO_FRAME();
		static jint STYLE_NO_INPUT();
		static jint STYLE_NO_TITLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DialogFragment(const char *className, const char *sig, Ts...agv) : android::app::Fragment(className, sig, std::forward<Ts>(agv)...) {}
		DialogFragment(QJniObject obj);
		
		// Constructors
		DialogFragment();
		
		// Methods
		void dismiss() const;
		void dismissAllowingStateLoss() const;
		void dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const;
		android::app::Dialog getDialog() const;
		jboolean getShowsDialog() const;
		jint getTheme() const;
		jboolean isCancelable() const;
		void onActivityCreated(android::os::Bundle arg0) const;
		void onAttach(android::content::Context arg0) const;
		void onCancel(JObject arg0) const;
		void onCreate(android::os::Bundle arg0) const;
		android::app::Dialog onCreateDialog(android::os::Bundle arg0) const;
		void onDestroyView() const;
		void onDetach() const;
		void onDismiss(JObject arg0) const;
		android::view::LayoutInflater onGetLayoutInflater(android::os::Bundle arg0) const;
		void onSaveInstanceState(android::os::Bundle arg0) const;
		void onStart() const;
		void onStop() const;
		void setCancelable(jboolean arg0) const;
		void setShowsDialog(jboolean arg0) const;
		void setStyle(jint arg0, jint arg1) const;
		jint show(android::app::FragmentTransaction arg0, JString arg1) const;
		void show(android::app::FragmentManager arg0, JString arg1) const;
	};
} // namespace android::app

