#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SparseBooleanArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SparseBooleanArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseBooleanArray(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SparseBooleanArray();
		SparseBooleanArray(jint arg0);
		
		// Methods
		void append(jint arg0, jboolean arg1) const;
		void clear() const;
		android::util::SparseBooleanArray clone() const;
		void delete_(jint arg0) const;
		jboolean equals(JObject arg0) const;
		jboolean get(jint arg0) const;
		jboolean get(jint arg0, jboolean arg1) const;
		jint hashCode() const;
		jint indexOfKey(jint arg0) const;
		jint indexOfValue(jboolean arg0) const;
		jint keyAt(jint arg0) const;
		void put(jint arg0, jboolean arg1) const;
		void removeAt(jint arg0) const;
		void setValueAt(jint arg0, jboolean arg1) const;
		jint size() const;
		JString toString() const;
		jboolean valueAt(jint arg0) const;
	};
} // namespace android::util

