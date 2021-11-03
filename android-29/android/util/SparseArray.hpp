#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SparseArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SparseArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseArray(QJniObject obj);
		
		// Constructors
		SparseArray();
		SparseArray(jint arg0);
		
		// Methods
		void append(jint arg0, JObject arg1) const;
		void clear() const;
		android::util::SparseArray clone() const;
		void _delete(jint arg0) const;
		JObject get(jint arg0) const;
		JObject get(jint arg0, JObject arg1) const;
		jint indexOfKey(jint arg0) const;
		jint indexOfValue(JObject arg0) const;
		jint keyAt(jint arg0) const;
		void put(jint arg0, JObject arg1) const;
		void remove(jint arg0) const;
		void removeAt(jint arg0) const;
		void removeAtRange(jint arg0, jint arg1) const;
		void setValueAt(jint arg0, JObject arg1) const;
		jint size() const;
		JString toString() const;
		JObject valueAt(jint arg0) const;
	};
} // namespace android::util

